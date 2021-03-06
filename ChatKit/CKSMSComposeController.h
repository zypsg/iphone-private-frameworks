/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKTranscriptController.h"

@class NSMutableArray;

@interface CKSMSComposeController : CKTranscriptController {
	NSMutableArray* _presetMessageParts;
	id _delegate;
	BOOL _mimeType;
	BOOL _alreadySetUp;
	BOOL _shouldReenableAutomaticKeyboard;
	NSMutableArray* _partsToInsert;
	NSMutableArray* _typesToInsert;
	int _entryViewInvisible;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSMutableArray* presetMessageParts;
@property(assign, nonatomic) BOOL mimeType;
+(BOOL)acceptsMIMEType:(id)type;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
+(BOOL)canSendPhotos:(int)photos videos:(int)videos audioClips:(int)clips;
+(id)_newMediaObjectForFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3 options:(id)options;
-(void)_addPart:(id)part;
-(BOOL)_insertMediaObject:(id)object;
-(BOOL)insertFilename:(id)filename MIMEType:(id)type exportedFilename:(id)filename3;
-(BOOL)insertFilename:(id)filename MIMEType:(id)type exportedFilename:(id)filename3 options:(id)options;
-(BOOL)insertData:(id)data MIMEType:(id)type exportedFilename:(id)filename;
-(void)setTextEntryContentsVisible:(BOOL)visible;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)transitionFromNewMessageToConversation;
-(void)cancelButtonClicked:(id)clicked;
-(void)send:(id)send;
-(void)dealloc;
-(void)_addPresetMessagePart:(id)part;
@end

@protocol CKSMSComposeControllerDelegate
@optional
-(void)smsComposeControllerCancelled:(CKSMSComposeController*)controller;
-(BOOL)smsComposeControllerSendStarted:(CKSMSComposeController*)controller;
-(void)smsComposeControllerAppeared:(CKSMSComposeController*)controller;
-(void)smsComposeControllerDataInserted:(CKSMSComposeController*)controller;
@end
