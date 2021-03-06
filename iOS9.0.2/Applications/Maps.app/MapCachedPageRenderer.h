/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MapPageRenderer.h>

@class NSCache, NSString;

@interface MapCachedPageRenderer : MapPageRenderer {

	NSCache* _printAreaToPrintInfoCache;

}

@property (nonatomic,readonly) NSCache * printAreaToPrintInfoCache;              //@synthesize printAreaToPrintInfoCache=_printAreaToPrintInfoCache - In the implementation block
@property (nonatomic,readonly) NSString * currentCacheKey; 
@property (nonatomic,readonly) id currentPrintInfo; 
-(id)computeCurrentPrintInfo;
-(NSCache *)printAreaToPrintInfoCache;
-(id)currentPrintInfo;
-(NSString *)currentCacheKey;
-(id)init;
@end

