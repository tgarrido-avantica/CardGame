//
//  PlayingCard.h
//  Matchismo
//
//  Created by Tomás Garrido Sandino on 31/8/16.
//  Copyright © 2016 Avantica Technologies. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
