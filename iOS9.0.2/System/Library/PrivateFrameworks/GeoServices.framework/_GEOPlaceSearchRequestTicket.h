/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion, NSDictionary;

@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) char chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(NSString *)searchQuery;
@end
