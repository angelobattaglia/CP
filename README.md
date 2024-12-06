# [Here's the website](https://angelobattaglia.github.io/CP/site/index.html)

## Starting kit to CP, and problem solutions

After [installing MkDocs Material on your system](https://squidfunk.github.io/mkdocs-material/),
on the root directory, i.e. where the `mkdocs.yml` file is located, do the following:

```shell
git clone
```

```shell
mkdocs build
mkdocs serve
```

# Workflow

On the `solutions` sub-directory I use this approach

## Makefile to clean the binaries

Simply type `make` to get rid of `.class` and `.out` files

## Add this to your `.zshrc` or `.bashrc` to generate templates and run the scripts

This will make you use two scripts that I use to be quick `gen` and `run`, and
adjust the path appropriately
```shell
export PATH="$PATH:$HOME/Repos/CP/fastexec"
```

then source it, of course
```shell
source .zshrc
```

Use `gen` to generate a template
```shell
gen problemX.cpp
```

and then `run` to run it
```shell
run problemX.cpp
```

