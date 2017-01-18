# Semantics for consistent activation in context-oriented systems

## What's in this repository?

- This repository contains the paper 'Semantics for consistent activation in context-oriented systems' as PDF, written by
    - Nicolás Cardozo
    - Sebastián González
    - Kim Mens
    - Ragnhild Van Der Straeten
    - Jorge Vallejos
    - Theo D'Hondt


- This repository contains a presentation made for "Software engineering and programming systems seminar"
    - Very short introduction about context-oriented programming
    - An explanation of "standard" Petri Nets
    - A discussion about how to model context activation/deactivation with Petri Nets
    - A discussion about extensions of standard petri nets to be able to model all the dependencies relation between contexts
    - An animated example to show how contexts interact when there is a disjunction dependency relation between them.
    - An animated example to show how contexts interact when there is a causality dependency relation between them.
    - A conclusion about the benefits of using Petri Nets and the benefits of having a strong formalism for semantics of context activation and deactivation.
    - Some more examples to show how other context interactions can be modelled.

## How do I compile the presentation?

Using your favorite LaTeX editor, open the `presentation/presentation.tex` file
and compile it.

If you are on Linux and you already installed `texlive-full`, go to the `presentation` folder and use the command line
```bash
make
```
## Contribution and Reuse

Feel free to do anything you want (use, copy, modify, sell, publish,...) with the `.tex`, `.sty` files without restriction.

For the `.pdf` file of the article, please contact the authors, you can find
all useful information by consulting the original publication at [https://www.researchgate.net/publication/267634206](https://www.researchgate.net/publication/267634206)
