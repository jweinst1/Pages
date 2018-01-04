# Pages

*A story event writing engine*

## Intro

`Pages` is a language generation engine that constructs story like events. It uses a unique model scheme that is different that other natural language generation techniques. Instead of relying on parts of speech, it separates the idea of language into entities.

For `Pages`, the two types of entities are objects and actions. Nearly all natural language can be modeled as objects connecting to each other through actions.

```
I see apples.
|   |   |
obj |   obj
    |
    action
```

Here, I, a pronoun, and apples, a noun, are objects. They exist as physical entities. `see` is an action. It's a behavior or something that has to be done and completed.

`Pages` uses a framework to pair objects and actions in a grammatically correct manner. It can select and synthesize story events at random.

## Install

1. clone/download the repo.
2. cd Pages
3. then do `make all`
4. This puts an executable called Pages in /bin.

## Usage
