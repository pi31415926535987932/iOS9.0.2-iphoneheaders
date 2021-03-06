/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCameraImportQueue : NSObject {

	NSMutableArray* _items;
	unsigned _index;

}
-(void)_removeItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isCompleted;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)currentItem;
-(id)itemsNotCompleted;
-(id)completedItems;
-(void)didCompleteItem:(id)arg1 ;
@end

