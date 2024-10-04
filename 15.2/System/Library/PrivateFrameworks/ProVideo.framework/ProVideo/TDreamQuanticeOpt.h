@interface TDreamQuanticeOpt : TDreamProgramWrapper {
    float numLevels;
    float numLevelsRecip;
    int levelsUniform;
    int recipLevelsUniform;
}

- (id)init;
- (void)setUniforms;
- (void)setNumLevels:(unsigned int)a0;

@end
