/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WDChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 annotationForPointInSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3;
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned)arg2;

@required
-(unsigned)numberOfDataSetsInGroup:(id)arg1;
-(unsigned)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3;

@end

