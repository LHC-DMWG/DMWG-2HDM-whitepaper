#!/bin/bash

if [ $# -ne 0 ]; then
pdflatex 2HDMa-whitepaper-final
bibtex 2HDMa-whitepaper-final
pdflatex 2HDMa-whitepaper-final
pdflatex 2HDMa-whitepaper-final
else
pdflatex 2HDMa-whitepaper-final
fi

