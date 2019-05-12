find $PWD -type f -name '*.sh' | sed 's#.*/##' | sed 's#\.sh##'
