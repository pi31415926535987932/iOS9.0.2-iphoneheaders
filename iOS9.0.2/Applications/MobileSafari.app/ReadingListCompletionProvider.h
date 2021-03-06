/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/CompletionProvider.h>

@class NSString;

@interface ReadingListCompletionProvider : CompletionProvider {

	unsigned _maxResults;
	NSString* _stringToComplete;
	char _onlyIncludeAvailableOffline;

}

@property (nonatomic,readonly) char onlyIncludeAvailableOffline;              //@synthesize onlyIncludeAvailableOffline=_onlyIncludeAvailableOffline - In the implementation block
-(void)setStringToComplete:(id)arg1 ;
-(unsigned)maximumCachedCompletionCount;
-(id)initWithMaximumNumberOfCompletions:(unsigned)arg1 onlyIncludeAvailableOffline:(char)arg2 ;
-(char)onlyIncludeAvailableOffline;
@end

