//
//  ExerciseType.h
//  Gyms
//
//  Created by Admin on 16.04.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#ifndef ExerciseType_h
#define ExerciseType_h

typedef enum : NSUInteger {
    PushUps = 0, // отжимания
    Squats = 1, // приседания
    Press = 2, // пресс
    Pulls = 3, // подтягивания
} ExerciseType;

extern const int SIZE_OF_EXERCISE_NAMES;

extern NSString * const EXERCISE_NAMES[];

#endif /* ExerciseType_h */
