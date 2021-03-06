/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFSaveFileActionUserInterface, WFFileStorageServiceOperation;
@interface WFSaveFileAction : WFStorageServiceAction {

	id<WFSaveFileActionUserInterface> _actionUserInterface;
	id<WFFileStorageServiceOperation> _saveOperation;

}

@property (nonatomic,retain) id<WFSaveFileActionUserInterface> actionUserInterface;              //@synthesize actionUserInterface=_actionUserInterface - In the implementation block
@property (nonatomic,retain) id<WFFileStorageServiceOperation> saveOperation;                    //@synthesize saveOperation=_saveOperation - In the implementation block
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)cancel;
-(void)finishRunningWithError:(id)arg1 ;
-(id)targetContentAttribution;
-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filePathKey;
-(id)showPickerKey;
-(id<WFSaveFileActionUserInterface>)actionUserInterface;
-(void)setActionUserInterface:(id<WFSaveFileActionUserInterface>)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg1 path:(id)arg2 input:(id)arg3 storageService:(id)arg4 ;
-(id<WFFileStorageServiceOperation>)saveOperation;
-(void)setSaveOperation:(id<WFFileStorageServiceOperation>)arg1 ;
@end

