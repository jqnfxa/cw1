#pragma once
#include <wchar.h>
#include <stdbool.h>
#define BUFFER_INCREASE 100 //for our strings

struct Sentence
{
	wchar_t* data;
	size_t size;
	size_t capacity;
};

struct Text
{
	struct Sentence* data;
	size_t size;
	size_t capacity;
};
