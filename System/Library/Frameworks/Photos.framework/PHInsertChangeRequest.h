/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHInsertChangeRequest <PHUpdateChangeRequest>
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@required
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
-(void)performConcurrentWork;
-(BOOL)isNewRequest;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1;

@end
