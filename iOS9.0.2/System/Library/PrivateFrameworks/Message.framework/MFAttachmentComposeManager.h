/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentManager.h>

@class NSMutableArray;

@interface MFAttachmentComposeManager : MFAttachmentManager {

	NSMutableArray* _composeAttachmentURLs;

}
-(void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2 ;
-(id)attachmentsForContext:(id)arg1 ;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)updateAttachment:(id)arg1 withNewData:(id)arg2 ;
-(void)dealloc;
-(id)_composeAttachmentDataProviderForContext:(id)arg1 ;
-(id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 ;
@end

