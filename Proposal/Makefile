all:
	pdflatex TFG_proposal.tex
	bibtex TFG_proposal.aux
	pdflatex TFG_proposal.tex
	pdflatex TFG_proposal.tex
	rm -f *.log *.aux *.bib *.bbl *.blg *.log

.PHONY: clean

clean:
	rm -f *.log *.aux *.bib *.bbl *.blg *.log
