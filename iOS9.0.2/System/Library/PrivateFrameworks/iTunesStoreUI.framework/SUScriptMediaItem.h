/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)scriptMediaTypeForNativeMediaType:(unsigned)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned)arg1 ;
+(unsigned)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(MPMediaItem *)nativeItem;
@end

