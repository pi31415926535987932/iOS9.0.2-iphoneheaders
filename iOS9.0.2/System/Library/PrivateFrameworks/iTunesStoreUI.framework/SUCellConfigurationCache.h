/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {

	id _cellContext;
	NSMutableArray* _configurations;

}

@property (nonatomic,retain) id cellContext;              //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)configurationForRow:(unsigned)arg1 ;
-(id)cellContext;
-(void)setCellContext:(id)arg1 ;
-(id)initWithClass:(Class)arg1 tableHeight:(float)arg2 ;
@end

