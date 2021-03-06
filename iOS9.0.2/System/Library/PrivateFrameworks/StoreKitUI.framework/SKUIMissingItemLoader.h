/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIItemRequestDelegate.h>

@protocol SKUIMissingItemDelegate;
@class NSString, SKUIResourceLoader, NSMutableDictionary;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {

	int _batchSize;
	id<SKUIMissingItemDelegate> _delegate;
	NSString* _imageProfile;
	NSString* _keyProfile;
	SKUIResourceLoader* _loader;
	NSMutableDictionary* _requests;

}

@property (assign,nonatomic) int batchSize;                                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMissingItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)batchSize;
-(void)setBatchSize:(int)arg1 ;
-(void)setDelegate:(id<SKUIMissingItemDelegate>)arg1 ;
-(id)init;
-(id<SKUIMissingItemDelegate>)delegate;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2 ;
-(id)_existingRequestIDForItemID:(id)arg1 ;
-(void)_requestItems:(id)arg1 withReason:(int)arg2 ;
@end

