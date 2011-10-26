//
//  WebServiceManager.h
//  BloomingdalesNYC
//
//  Created by Craig Spitzkoff on 10/21/11.
//  Copyright (c) 2011 Raizlabs Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RZWebServiceRequest.h"

@interface RZWebServiceManager : NSObject <WebServiceRequestDelegate>

@property (strong, nonatomic) NSDictionary* apiCalls;

-(id) initWithCallsPath:(NSString*)callsPath;
-(id) initWithCalls:(NSDictionary*)apiCalls;

-(RZWebServiceRequest*) makeRequestWithKey:(NSString*)key andTarget:(id)target;
-(RZWebServiceRequest*) makeRequestWithKey:(NSString*)key andTarget:(id)target andParameters:(NSDictionary*)parameters;

// add a request to the queue. This will execute the request when there are enough active slots for it.
-(void) enqueueRequest:(RZWebServiceRequest*)request;

-(void) cancelRequestsForTarget:(id)target;

@end