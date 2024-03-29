TARGET_EXEC ?= AlpiScript

BUILD_DIR ?= ./build
SRC_DIRS ?= ./source

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.cc )
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP -c -pipe -O3 -std=gnu++11 -Wall -W -D_REENTRANT -fPIC

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# assembly
#$(BUILD_DIR)/%.s.o: %.s
#	$(MKDIR_P) $(dir $@)
#	$(AS) $(ASFLAGS) -c $< -o $@

# c source
#$(BUILD_DIR)/%.c.o: %.c
#	$(MKDIR_P) $(dir $@)
#	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# c++ source (cpp)
$(BUILD_DIR)/%.cpp.o: %.cpp
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@
	
# c++ source (cc) //For generated JavaCC files
$(BUILD_DIR)/%.cc.o: %.cc
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

parser:
	$(RM) -r source/javacc/generated/
	java -cp source/javacc/javacc.jar jjtree source/javacc/grammar.jjt
	java -cp source/javacc/javacc.jar javacc source/javacc/generated/grammar.jj 

clean:
	$(RM) -r $(BUILD_DIR)
	
test:
	$(BUILD_DIR)/AlpiScript


-include $(DEPS)

MKDIR_P ?= mkdir -p
