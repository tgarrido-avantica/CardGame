//
//  Card.h
//  Matchismo
//
//  Created by Tomás Garrido Sandino on 31/8/16.
//  Copyright © 2016 Avantica Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property(strong, nonatomic) NSString *contents;

@property(nonatomic, getter=isChosen) BOOL chosen;
@property(nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
