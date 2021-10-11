powershell -Command "Remove-Item source/javacc/generated -Recurse -Force -Confirm:$false"
java -cp source/javacc/javacc.jar jjtree source/javacc/grammar.jjt
java -cp source/javacc/javacc.jar javacc source/javacc/generated/grammar.jj 