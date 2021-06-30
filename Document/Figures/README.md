# Figures
This directory contains the different figures we have included in our work. In the preamble we invoke `\graphicspath{{Figures/}}` so that we only need to specify the figure's filename, not the entire path, when inserting them.

One can use the following structure to insert figures:

    \begin{figure}
        \centering
        \includegraphics[width=0.75\linewidth]{<filename>}
        \caption[LoF's Entry Text for the Imgae]{Figure caption. You can \cite{} here too!}
        \label{fig:label-name-for-\ref{}}
    \end{figure}
