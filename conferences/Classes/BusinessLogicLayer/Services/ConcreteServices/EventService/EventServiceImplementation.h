//
//  EventServiceEmplementation.h
//  Conferences
//
//  Created by Karpushin Artem on 01/10/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventService.h"

#import "EventOperationFactory.h"
#import "OperationScheduler.h"

@interface EventServiceImplementation : NSObject <EventService>

@property (strong, nonatomic) EventOperationFactory *eventOperationFactory;
@property (strong, nonatomic) id <OperationScheduler> operationScheduler;

@end
