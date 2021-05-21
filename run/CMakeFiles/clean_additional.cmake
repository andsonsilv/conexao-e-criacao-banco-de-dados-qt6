# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/conexao-e-criacao-banco-de-dados-qt6_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/conexao-e-criacao-banco-de-dados-qt6_autogen.dir/ParseCache.txt"
  "conexao-e-criacao-banco-de-dados-qt6_autogen"
  )
endif()
