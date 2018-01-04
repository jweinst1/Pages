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

### Model

This is a model of the object to action bonding.

![Pages Model](/pics/Pages.jpg)

## Install

1. clone/download the repo.
2. `cd Pages`
3. then do `make all`
4. This puts an executable called Pages in /bin.

## Usage

You can specify the number of events to generate.

```
$ ./bin/Pages 10
a orange ball cautiously bounces toward a huge and large school.
a ball bounces toward a small park.
the dim and dim ball quickly rolls toward a park.
a round ball bounces toward a huge and large school.
a pink and orange ball bounces toward a quaint and precious park.
a gloomy ball cautiously bounces toward a huge, huge school.
the fluffy ball rolls toward a park.
a blue, purple ball rolls toward a school.
a purple ball bounces toward a small and quaint park.
a gloomy, orange ball quickly rolls toward a prestigious school.
```

## License

This project is licensed under the Apache 2.0 License.

### Development

`Pages` is a prototype that will be developed into a full story-generator with an input language, making it highly scalable and useful for educational purposes.
