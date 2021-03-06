/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface CloudLoadBulkArtworkInfoOperation : CloudLibraryOperation {

	NSArray* _cloudIDs;
	char _useLongIDs;
	unsigned char _itemKind;
	NSArray* _cloudArtworkInfoDictionaries;

}

@property (nonatomic,readonly) char useLongIDs;                                     //@synthesize useLongIDs=_useLongIDs - In the implementation block
@property (nonatomic,readonly) unsigned char itemKind;                              //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) NSArray * cloudArtworkInfoDictionaries;              //@synthesize cloudArtworkInfoDictionaries=_cloudArtworkInfoDictionaries - In the implementation block
-(char)useLongIDs;
-(id)initWithCloudIDs:(id)arg1 ;
-(NSArray *)cloudArtworkInfoDictionaries;
-(void)main;
-(unsigned char)itemKind;
@end

