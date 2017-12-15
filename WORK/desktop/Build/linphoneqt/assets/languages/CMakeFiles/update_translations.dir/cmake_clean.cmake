file(REMOVE_RECURSE
  "en.qm"
  "fr.qm"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/update_translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
