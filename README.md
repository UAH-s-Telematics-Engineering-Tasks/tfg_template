# LaTeX Templates for an Undergraduate Thesis at the University of Alcalá
You can check a completed thesis on [github.com/pcolladosoto/tfg](https://github.com/pcolladosoto/tfg).

## Setting Up LaTeX
### Linux Distros
#### Debian-based Distros
Installing the `texlive-full` package should provide all the necessary tools needed to compile the project. This can be achieved with the following on *Debian*-based distributions such as *Ubuntu*:

    sudo apt update && sudo apt install texlive-full

We have provided a `Makefile` that automatically builds the document. This file is to be rad by `make`, which usually comes bundled with the operating system. If it is not present, the following should make them available on *Debian*-based distributions:

    sudo apt update && sudo apt install build-essential

#### Other Distros
The idea set forth before is the same for other distributions: you need to acquire a copy of TexLive and, if you want to leverage the existing `Makefiles`, the `make` utility. The commands specific to your system will be pretty much the same except for the package manager, that could be `pacman`, `dnf` for instance, and the package names. In any case, [TexLive's Documentation](http://tug.org/texlive/) offers better information than the one we can possibly provide.

### macOS
Instead of the TexLive distribution one can leverage [MacTex](http://tug.org/mactex/). From that site you can download a package that will make all the necessary LaTeX utilities available.

In order to leverage the `Makefiles` you will need `make` as well. By running the following you can acquire the *Xcode Command Line Tools*, which include `make`:

    xcode-select --install

### Windows
We have never used LaTeX in conjunction with Windows, so we cannot provide that much help... Check [TexLive's Windows Documentation](http://tug.org/texlive/windows.html) as you are bound to find useful information there.

When it comes to using `make` in Windows we have absolutely no idea what to do. You can check [Stack Overflow](https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows) for some information, but you are on your own...

### Overleaf
[Overlaef](https://www.overleaf.com) is a wonderful browser-based LaTeX editor that can compile documents and has no installation overhead. You can import the documents contained in this project directly into it and generate a PDF without any hassle at all. Overleaf offers free and paid plans and, to the extent of what we know, importing and compiling documents in completely free.

If using Overleaf it doesn't make that much sense to use `make` at all as Overleaf will handle the compilation for you.

Overleaf is a great option to get up and running fast. We nevertheless chose to set up our system to work with LaTeX because we prefer working offline and to control our projects through `git`. Even though Overleaf offers `git` integration we are not sure of whether it's a free feature and we didn't want to go through the hassle of configuring it.

What's more, Overleaf offers a tremendous amount of great documentation you can browse at their [Documentation Portal](https://www.overleaf.com/learn).

## Compiling the Documents
If you chose to install LaTeX locally you can `cd` into the `Document` or `Porposal` directories (i.e. run `cd Document`) and then run `make` to compile the entire document. Upon completion the `main.pdf` or `TFG_proposal.pdf` files are produced, which contain the documents themselves. If you do not want to rely on `make` you can also manually run the following from the `Document` or `Proposal` directories:

    pdflatex <document-filename>.tex
    bibtex <document-filename>.aux
    pdflatex <document-filename>.pdf

Where `<document-filename>`is either `main.tex` for the files within the `Document/`directory or `TFG_proposal.tex` for the `Proposal/` directory.

## Contact
If you have any suggestions or questions feel free to contact me at the address provided in my [GitHub profile](https://github.com/pcolladosoto?tab=followers). You can also open an [issue](https://github.com/pcolladosoto/tfg/issues) and make you query publicly visible to help others.
