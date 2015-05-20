//
//  Grid.h
//  GameOfLife
//
//  Created by Shanmathuran Sritharan on 20.05.15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property(nonatomic, assign) int totalAlive;
@property(nonatomic, assign) int generation;

@end
