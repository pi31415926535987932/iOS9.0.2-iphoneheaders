/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEORPProblemRequester : GEOServiceRequester
+(id)sharedInstance;
+(unsigned)_urlType;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_validateResponse:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
@end
