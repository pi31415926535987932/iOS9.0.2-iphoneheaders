/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@interface MTStoreReportingController : MTSingleton
+(id)reportingStringForPlayReason:(unsigned)arg1 ;
-(id)_dictionaryForPodcastUuid:(id)arg1 ;
-(void)recordMetricsEventForType:(int)arg1 withData:(id)arg2 ;
-(void)sendRequest:(id)arg1 referer:(id)arg2 ;
-(id)pageTypeForReportType:(int)arg1 ;
-(void)reportWithType:(int)arg1 userInfo:(id)arg2 location:(id)arg3 reason:(unsigned)arg4 ;
-(void)reportPlaybackFromStore:(id)arg1 reason:(unsigned)arg2 ;
@end

