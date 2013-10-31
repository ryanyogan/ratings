//
//  Player.h
//  Ratings
//
//  Created by Ryan Yogan on 10/30/13.
//  Copyright (c) 2013 Ryan Yogan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;
@end
