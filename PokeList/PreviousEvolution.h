//
//  PreviousEvolution.h
//  PokeList
//
//  Created by Jeyaksan RAJARATNAM on 15/01/2017.
//  Copyright © 2017 grp1.moc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PreviousEvolution : NSObject{
@private
    int number_;
    NSString *name_;
}

@property(nonatomic, assign) int number;
@property(nonatomic, strong) NSString *name;

/// Constructeur prenant en paramètre, un dictionnaire
- (instancetype) initWithNSDictionnary:(NSDictionary*) dict;

@end
