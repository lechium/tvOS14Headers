/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableArray;

@interface ProjectImportExport : NSObject {

	NSMutableArray* _exportedProjectList;

}

@property (retain) NSMutableArray * exportedProjectList;              //@synthesize exportedProjectList=_exportedProjectList - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setExportedProjectList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exportedProjectList;
-(void)refreshExportedProjectFileList;
-(BOOL)haveExportedProjectNamed:(id)arg1 ;
-(void)undeleteExportedProject:(id)arg1 ;
-(void)deleteExportedProject:(id)arg1 ;
-(void)deleteExportedProjectWithName:(id)arg1 ;
@end

