(TeX-add-style-hook
 "1"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "11pt" "a4paper" "oneside")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("fontenc" "T2A") ("inputenc" "utf8") ("babel" "english" "russian") ("olymp" "russian")))
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art11"
    "fontenc"
    "inputenc"
    "babel"
    "olymp"
    "graphics"
    "wrapfig"
    "amsmath"
    "amssymb"
    "epigraph"
    "graphicx")
   (TeX-add-symbols
    "qo"
    "qq")))

