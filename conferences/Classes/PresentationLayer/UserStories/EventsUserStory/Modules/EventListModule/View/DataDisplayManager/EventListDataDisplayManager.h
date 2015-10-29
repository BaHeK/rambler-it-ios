//
//  EventListDataDisplayManager.h
//  Conferences
//
//  Created by Karpushin Artem on 25/10/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "DataDisplayManager.h"

@interface EventListDataDisplayManager : NSObject <DataDisplayManager>

- (void)configureDataDisplayManagerWithEvents:(NSArray *)events;
- (void)updateDataDisplayManagerWithEvents:(NSArray *)events;

@end
