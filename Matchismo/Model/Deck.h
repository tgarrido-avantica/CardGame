//
//  Deck.h
//  Matchismo
//
//  Created by Tomás Garrido Sandino on 31/8/16.
//  Copyright © 2016 Avantica Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
