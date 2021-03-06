/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, MusicMediaQueryDataSource, NSSet, MPMediaQuery, NSString;

@interface MusicMediaEntityProvider : NSObject <MusicEntityProviding, NSCoding> {

	NSArray* _localizedSectionIndexTitles;
	MusicMediaQueryDataSource* _mediaQueryDataSource;
	NSSet* _requiredVisibilityPrioritySectionIndexTitles;
	int _maximumItemCount;

}

@property (assign,nonatomic) int maximumItemCount;                                            //@synthesize maximumItemCount=_maximumItemCount - In the implementation block
@property (nonatomic,readonly) MusicMediaQueryDataSource * mediaQueryDataSource;              //@synthesize mediaQueryDataSource=_mediaQueryDataSource - In the implementation block
@property (nonatomic,retain) MPMediaQuery * mediaQuery; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPMediaQuery *)mediaQuery;
-(char)hasEntities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(id)initWithMediaQuery:(id)arg1 ;
-(void)_handleMediaQueryDataSourceDidInvalidate;
-(id)initWithMediaQueryDataSource:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned)arg2 ;
-(MusicMediaQueryDataSource *)mediaQueryDataSource;
-(void)setMediaQuery:(MPMediaQuery *)arg1 ;
-(void)_dataSourceWasInvalidated:(id)arg1 ;
-(id)_localizedSectionIndexTitles;
-(id)_requiredVisibilityPrioritySectionIndexTitles;
-(void)_loadSectionIndexTitleDataIfNeeded;
-(int)maximumItemCount;
-(void)setMaximumItemCount:(int)arg1 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

