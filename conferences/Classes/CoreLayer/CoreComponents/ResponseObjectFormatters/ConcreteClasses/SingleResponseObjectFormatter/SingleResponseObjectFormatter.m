//
//  RCFSingleResponseObjectFormatter.m
//  Conferences
//
//  Created by Egor Tolstoy on 04/10/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import "SingleResponseObjectFormatter.h"

@implementation SingleResponseObjectFormatter

- (id)formatServerResponse:(NSDictionary *)serverResponse {
    NSArray *formattedResponse = @[serverResponse];
    return formattedResponse;
}

@end