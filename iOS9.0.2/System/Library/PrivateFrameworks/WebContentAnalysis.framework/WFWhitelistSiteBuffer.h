/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject {

	NSMutableDictionary* _siteTree;
	unsigned _maxSize;

}

@property (retain) NSMutableDictionary * siteTree;              //@synthesize siteTree=_siteTree - In the implementation block
@property (assign) unsigned maxSize;                            //@synthesize maxSize=_maxSize - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)maxSize;
-(void)setMaxSize:(unsigned)arg1 ;
-(char)containsURLString:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
-(NSMutableDictionary *)siteTree;
-(char)treeContainsURLString:(id)arg1 ;
-(void)setSiteTree:(NSMutableDictionary *)arg1 ;
@end

