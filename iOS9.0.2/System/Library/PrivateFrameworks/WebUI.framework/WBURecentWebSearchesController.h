/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSRecentWebSearchesController.h>

@class NSString;

@interface WBURecentWebSearchesController : WBSRecentWebSearchesController {

	NSString* _preferencesDomain;
	NSString* _pathToLegacySearchesFile;

}
+(unsigned)_maximumNumberOfSearchesToTrack;
-(void)_removeLegacyRecentSearchesData;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
-(id)initWithPreferencesDomain:(id)arg1 pathToLegacySearchesFile:(id)arg2 ;
@end

