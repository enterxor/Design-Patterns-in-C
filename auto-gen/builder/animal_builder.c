
/**
 * animal_builder.c  2014-04-28 16:14:06
 * anonymouse(anonymouse@email)
 *
 * Copyright (C) 2000-2014 All Right Reserved
 * 
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * Auto generate to show Design Pattern in C
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "animal_builder.h"


static void animal_builder_ops_build_header(struct animal_builder *animal_builder)
{
	printf("animal_builder::build_header()\n");
}
static void animal_builder_ops_build_body(struct animal_builder *animal_builder)
{
	printf("animal_builder::build_body()\n");
}
static void animal_builder_ops_build_leg(struct animal_builder *animal_builder)
{
	printf("animal_builder::build_leg()\n");
}
static void animal_builder_ops_build_arm(struct animal_builder *animal_builder)
{
	printf("animal_builder::build_arm()\n");
}
static void animal_builder_ops_build_tail(struct animal_builder *animal_builder)
{
	printf("animal_builder::build_tail()\n");
}
static struct animal_builder_ops animal_builder_ops = {
	.build_header = animal_builder_ops_build_header,
	.build_body = animal_builder_ops_build_body,
	.build_leg = animal_builder_ops_build_leg,
	.build_arm = animal_builder_ops_build_arm,
	.build_tail = animal_builder_ops_build_tail,
};

void animal_builder_init(struct animal_builder *animal_builder)
{
	memset(animal_builder, 0, sizeof(*animal_builder));
	animal_builder->ops = &animal_builder_ops;
}

