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
    PushUps = (1 << 0), // отжимания
    Squats = (1 << 1), // приседания
    Press = (1 << 2), // пресс
    Pulls = (1 << 3), // подтягивания
} ExerciseType;

#endif /* ExerciseType_h */
