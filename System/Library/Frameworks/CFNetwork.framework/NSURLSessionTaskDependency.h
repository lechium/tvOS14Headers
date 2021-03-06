/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * taskDependencyDescription;              //@synthesize taskDependencyDescription=_taskDependencyDescription - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * parentTask;                                         //@synthesize parentTask=_parentTask - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * mainDocumentTask;                                   //@synthesize mainDocumentTask=_mainDocumentTask - In the implementation block
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSURLSessionTaskDependencyDescription *)taskDependencyDescription;
-(void)setTaskDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(NSURLSessionTask *)parentTask;
-(NSURLSessionTask *)mainDocumentTask;
@end

