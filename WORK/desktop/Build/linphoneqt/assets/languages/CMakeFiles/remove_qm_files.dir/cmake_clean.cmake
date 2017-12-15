file(REMOVE_RECURSE
  "en.qm"
  "fr.qm"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/remove_qm_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
