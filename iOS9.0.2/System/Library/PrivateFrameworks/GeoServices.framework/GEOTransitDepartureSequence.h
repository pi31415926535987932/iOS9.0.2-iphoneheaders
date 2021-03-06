/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol GEOTransitDepartureSequence <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) char isLowFrequency; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@required
-(NSString *)direction;
-(id<GEOTransitLine>)line;
-(NSArray *)operatingHours;
-(NSString *)headsign;
-(id)firstDepartureValidForDate:(id)arg1;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)firstDepartureOnOrAfterDate:(id)arg1;
-(id)firstDepartureAfterDate:(id)arg1;
-(unsigned)numberOfDeparturesAfterDate:(id)arg1;
-(char)hasFrequencyAtDate:(id)arg1;
-(char)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
-(char)isLowFrequency;
-(id)frequencyToDescribeAtDate:(id)arg1;
-(double)frequencyForSortingAtDate:(id)arg1;
-(id)departuresValidForDate:(id)arg1;
-(char)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;

@end

