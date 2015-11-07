/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem {

	SCD_Struct_CK7 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_CK7 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(id)UTITypes;
-(void)setCoordinate:(SCD_Struct_CK7)arg1 ;
-(SCD_Struct_CK7)coordinate;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 guid:(id)arg3 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(char)isDroppedPin;
@end
