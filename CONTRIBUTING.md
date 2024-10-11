# Contributing
Thank you for taking your time to contribute!

## Table of Contents
- [How to Contribute](#how-to-contribute)
- [Git Guidelines](#git-guidelines)
- [Repository Specifics](#repository-specifics)

## How to Contribute
You can contribute in more ways than just code.

Reporting bugs and other kind of feedback helps us improve our service already.\
To do so, open an Issue in the corresponding repository or contact us in our [Discord community](https://akarii.cafe/discord).

## Git Guidelines
### Git Branches
All changes must be made in a branch and submitted as a Pull Request.

Your branch should:
- be prefixed with either `feature` or `bugfix` depending on the type of change
- only add/fix one feature/bug at a time
- contain multiple commits, instead of one big commit, if possible

### Git Commits
Your commit should:
- be signed
- be written in present tense
- be capitalized
- not finish by a dot or any other punctuation character (!,?)
- start with a verb (e.g. `Add`, `Fix`, `Update`)

## Repository Specifics
1. Headers must be dumped with [Leptos'](https://github.com/leptos-null) [ClassDumpRuntime](https://github.com/leptos-null/ClassDumpRuntime) tool
2. We only accept one dump of headers per major iOS version
    - Dumps of newer minor and patch versions of existing dumps are accepted