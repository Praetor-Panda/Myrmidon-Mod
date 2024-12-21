#define _ARMA_

class CfgPatches
{
    class Weapons_F_myr_HF_Explosives
    {
        addonRootClass = "A3_Weapons_F";
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_epa", "A3_Weapons_F_epb", "A3_Weapons_F_epc", "A3_Weapons_F_beta", "A3_Weapons_F_gamma", "A3_Weapons_F_exp", "A3_Weapons_F_tank", "A3_Weapons_F_jets", "A3_Weapons_F_mark", "A3_Weapons_F_orange", "A3_Weapons_F_enoch"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgCloudlets
{
    class myr_HandFlare_Effect_Smoke_Base
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        particleType = "Billboard";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 0.5;
        timerPeriod = 1;
        lifeTime = 1.1;
        lifeTimeVar = 0.4;
        rotationVelocity = 1;
        rotationVelocityVar = 9;
        weight = 1.2;
        volume = 1;
        rubbing = 0.5;
        size[] = {0.05, 0.5};
        sizeVar = 0;
        sizeCoef = 0.6;
        color[] = {{0.1353, 0.1353, 0.1353, 0.3}};
        colorVar[] = {0, 0, 0, 0};
        colorCoef[] = {1, 1, 1, 1};
        randomDirectionPeriod = 0.2;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.02;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.022, -0.125};
        positionVar[] = {0, 0, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0.2, 0};
        MoveVelocityVar[] = {0.08, 0.08, 0.08};
        MoveVelocityVarConst[] = {0, 0, 0};
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.6;
        blockAIVisibility = 0;
    };
    class myr_HandFlare_Effect_Smoke_Base_UW : myr_HandFlare_Effect_Smoke_Base
    {
        interval = 0.04;
        particleShape = "\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
        particleFSNtieth = 4;
        particleFSIndex = 0;
        particleFSFrameCount = 16;
        particleFSLoop = 1;
        animationSpeedCoef = 1;
        lifeTime = 8;
        lifeTimeVar = 5;
        rotationVelocity = 1;
        weight = 1.15;
        volume = 1;
        size[] = {0.2};
        sizeVar = 0.004;
        color[] = {{1, 1, 1, 1}};
        colorVar[] = {0, 0, 0, 1};
        colorCoef[] = {1, 1, 1, 1};
        moveVelocity[] = {0, 0, 0};
        MoveVelocityVar[] = {0.05, 0.05, 0.05};
        MoveVelocityVarConst[] = {0, 0, 0};
        destroyOnWaterSurface = -1;
    };
    class myr_HandFlare_Effect_Smoke_Red : myr_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0, 0.2}};
    };
    class myr_HandFlare_Effect_Smoke_Red_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_HandFlare_Effect_Smoke_Green : myr_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0.5, 0.1, 0.2}};
    };
    class myr_HandFlare_Effect_Smoke_Green_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_HandFlare_Effect_Smoke_Yellow : myr_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0.5, 0, 0.2}};
    };
    class myr_HandFlare_Effect_Smoke_Yellow_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_HandFlare_Effect_Smoke_Blue : myr_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0, 0.5, 0.2}};
    };
    class myr_HandFlare_Effect_Smoke_Blue_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_HandFlare_Effect_Smoke_Purple : myr_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0.5, 0.2}};
    };
    class myr_HandFlare_Effect_Smoke_Purple_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Base : myr_HandFlare_Effect_Smoke_Base
    {
        interval = 0.035;
        animationSpeed[] = {1};
        lifeTime = 25;
        lifeTimeVar = 10;
        rotationVelocity = 0.3;
        rotationVelocityVar = 3;
        weight = 1.2;
        rubbing = 0.1;
        size[] = {0.05, 20};
        moveVelocity[] = {0, 0.2, 0};
        MoveVelocityVar[] = {0.1, 0.1, 0.1};
    };
    class myr_SignalFlare_Effect_Smoke_Base_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Red : myr_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0, 0.2}};
    };
    class myr_SignalFlare_Effect_Smoke_Red_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Green : myr_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0.5, 0.1, 0.2}};
    };
    class myr_SignalFlare_Effect_Smoke_Green_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Yellow : myr_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0.5, 0, 0.2}};
    };
    class myr_SignalFlare_Effect_Smoke_Yellow_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Blue : myr_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0, 0.5, 0.2}};
    };
    class myr_SignalFlare_Effect_Smoke_Blue_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_SignalFlare_Effect_Smoke_Purple : myr_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0.5, 0.2}};
    };
    class myr_SignalFlare_Effect_Smoke_Purple_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class myr_HandFlare_Effect_Sparks_Base
    {
        interval = 0.004;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        particleType = "Billboard";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 360;
        timerPeriod = 1;
        lifeTime = 0.2;
        lifeTimeVar = 0.2;
        rotationVelocity = 1;
        weight = 210;
        volume = 0.008;
        rubbing = 0.3;
        size[] = {0.12, 0};
        sizeVar = 0.03;
        sizeCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.019, -0.125};
        positionVar[] = {0.008, 0.008, 0.008};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {"( - inDirX * 1 + surfNormalX / 2) * inSpeed / 1", "( - inDirY * 1 + surfNormalY / 2) * inSpeed / 1", "( - inDirZ * 1 + surfNormalZ / 2) * inSpeed / 1"};
        moveVelocityVar[] = {3.2, 3.2, 3.2};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocityVar = 0;
        blockAIVisibility = 0;
        emissiveColor[] = {{10, 10, 10, 1}};
        bounceOnSurface = 0.4;
        bounceOnSurfaceVar = 0.4;
    };
    class myr_HandFlare_Effect_Sparks_Red : myr_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 0.3, 0.3, -6.5}, {1, 0.3, 0.3, -6}, {1, 0.3, 0.3, -5.5}, {1, 0.3, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class myr_HandFlare_Effect_Sparks_Green : myr_HandFlare_Effect_Sparks_Base
    {
        color[] = {{0.3, 1, 0.3, -6.5}, {0.3, 1, 0.3, -6}, {0.3, 1, 0.3, -5.5}, {0.3, 1, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class myr_HandFlare_Effect_Sparks_Yellow : myr_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 1, 0.3, -6.5}, {1, 1, 0.3, -6}, {1, 1, 0.3, -5.5}, {1, 1, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class myr_HandFlare_Effect_Sparks_Blue : myr_HandFlare_Effect_Sparks_Base
    {
        color[] = {{0.3, 0.3, 1, -6.5}, {0.3, 0.3, 1, -6}, {0.3, 0.3, 1, -5.5}, {0.3, 0.3, 1, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class myr_HandFlare_Effect_Sparks_Purple : myr_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 0.3, 1, -6.5}, {1, 0.3, 1, -6}, {1, 0.3, 1, -5.5}, {1, 0.3, 1, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class myr_HandFlare_Effect_Flame_Base
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleFSNtieth = 16;
        particleFSIndex = 10;
        particleFSFrameCount = 32;
        particleFSLoop = 1;
        particleType = "Billboard";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 1;
        timerPeriod = 3;
        lifeTime = 0.45;
        lifeTimeVar = 0.3;
        rotationVelocity = 0;
        weight = 0.0515;
        volume = 0.04;
        rubbing = 0.16;
        size[] = {0.1, 0};
        sizeVar = 0.05;
        sizeCoef = 1;
        colorVar[] = {0.1, 0.1, 0.1, 0};
        colorCoef[] = {1, 1, 1, 1};
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.019, -0.125};
        positionVar[] = {0.018, 0.08, 0.018};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0.01, 0.01, 0.01};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocityVar = 0;
    };
    class myr_HandFlare_Effect_Flame_Red : myr_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 0.3, 0.3, -80}};
    };
    class myr_HandFlare_Effect_Flame_Green : myr_HandFlare_Effect_Flame_Base
    {
        color[] = {{0, 1, 0.1, -80}};
    };
    class myr_HandFlare_Effect_Flame_Yellow : myr_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 1, 0.1, -80}};
    };
    class myr_HandFlare_Effect_Flame_Blue : myr_HandFlare_Effect_Flame_Base
    {
        color[] = {{0.1, 0.1, 1, -80}};
    };
    class myr_HandFlare_Effect_Flame_Purple : myr_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 0.1, 1, -80}};
    };
};
class CfgLights
{
    class myr_HandFlare_Light_Base
    {
        intensity = 20000;
        drawLight = 0;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 0;
        };
        dayLight = 0;
        useFlare = 1;
        flareSize = 5;
        flareMaxDistance = 600;
        position[] = {0, 0.019, -0.125};
    };
    class myr_HandFlare_Light_Red : myr_HandFlare_Light_Base
    {
        color[] = {1, 0.25, 0};
        diffuse[] = {0.8, 0.35, 0.25};
        ambient[] = {2, 0.3, 0};
    };
    class myr_HandFlare_Light_Green : myr_HandFlare_Light_Base
    {
        color[] = {0.5, 1, 0.25};
        diffuse[] = {0.5, 0.8, 0.25};
        ambient[] = {0.25, 2, 0.25};
    };
    class myr_HandFlare_Light_Yellow : myr_HandFlare_Light_Base
    {
        color[] = {1, 1, 0.25};
        diffuse[] = {0.8, 0.8, 0.25};
        ambient[] = {2, 2, 0.25};
    };
    class myr_HandFlare_Light_Blue : myr_HandFlare_Light_Base
    {
        color[] = {0.25, 0.25, 1};
        diffuse[] = {0.25, 0.25, 0.8};
        ambient[] = {0.25, 0.25, 2};
    };
    class myr_HandFlare_Light_Purple : myr_HandFlare_Light_Base
    {
        color[] = {1, 0.25, 1};
        diffuse[] = {0.8, 0.25, 0.8};
        ambient[] = {2, 0.25, 2};
    };
    class myr_SignalFlare_Light_Base : myr_HandFlare_Light_Base
    {
        intensity = 2500;
        drawLight = 0;
        flareSize = 3.5;
        flareMaxDistance = 800;
    };
    class myr_SignalFlare_Light_Red : myr_SignalFlare_Light_Base
    {
        color[] = {1, 0.25, 0};
        diffuse[] = {0.8, 0.35, 0.25};
        ambient[] = {2, 0.3, 0};
    };
    class myr_SignalFlare_Light_Green : myr_SignalFlare_Light_Base
    {
        color[] = {0.5, 1, 0.25};
        diffuse[] = {0.5, 0.8, 0.25};
        ambient[] = {0.25, 2, 0.25};
    };
    class myr_SignalFlare_Light_Yellow : myr_SignalFlare_Light_Base
    {
        color[] = {1, 1, 0.25};
        diffuse[] = {0.8, 0.8, 0.25};
        ambient[] = {2, 2, 0.25};
    };
    class myr_SignalFlare_Light_Blue : myr_SignalFlare_Light_Base
    {
        color[] = {0.25, 0.25, 1};
        diffuse[] = {0.25, 0.25, 0.8};
        ambient[] = {0.25, 0.25, 2};
    };
    class myr_SignalFlare_Light_Purple : myr_SignalFlare_Light_Base
    {
        color[] = {1, 0.25, 1};
        diffuse[] = {0.8, 0.25, 0.8};
        ambient[] = {2, 0.25, 2};
    };
    class myr_HandFlare_Light_Sparks_Base
    {
        ambient[] = {0, 0, 0, 0};
        intensity = 500;
        drawLight = 0;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 6;
            hardLimitStart = 40;
            hardLimitEnd = 80;
        };
        dayLight = 1;
        useFlare = 0;
        blinking = 0;
        position[] = {0, 0.019, -0.125};
    };
    class myr_HandFlare_Light_Sparks_Red : myr_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.2, 0};
    };
    class myr_HandFlare_Light_Sparks_Green : myr_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.2, 0.8, 0};
    };
    class myr_HandFlare_Light_Sparks_Yellow : myr_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.8, 0};
    };
    class myr_HandFlare_Light_Sparks_Blue : myr_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.2, 0.2, 0.8};
    };
    class myr_HandFlare_Light_Sparks_Purple : myr_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.2, 0.8};
    };
};
class myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Base
    {
        simulation = "light";
        lifeTime = 590;
    };
    class myr_HandFlare_Light_Sparks_Base
    {
        simulation = "light";
        position[] = {0, 0, 0};
        intensity = 0.008;
        interval = 1;
        lifeTime = 560;
    };
    class myr_HandFlare_Effect_Smoke_Base
    {
        simulation = "particles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 600;
    };
    class myr_HandFlare_Effect_Smoke_Base_UW
    {
        simulation = "particles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 590;
    };
    class myr_HandFlare_Effect_Sparks_Base
    {
        simulation = "particles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 560;
    };
    class myr_HandFlare_Effect_Flame_Base
    {
        simulation = "particles";
        lifeTime = 590;
    };
};
class myr_HandFlare_Effect_Red : myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Red : myr_HandFlare_Light_Base
    {
        type = "myr_HandFlare_Light_Red";
    };
    class myr_HandFlare_Light_Sparks_Red : myr_HandFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Red";
    };
    class myr_HandFlare_Effect_Smoke_Red : myr_HandFlare_Effect_Smoke_Base
    {
        type = "myr_HandFlare_Effect_Smoke_Red";
    };
    class myr_HandFlare_Effect_Smoke_Red_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        type = "myr_HandFlare_Effect_Smoke_Red_UW";
    };
    class myr_HandFlare_Effect_Sparks_Red : myr_HandFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Red";
    };
    class myr_HandFlare_Effect_Flame_Red : myr_HandFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Red";
    };
};
class myr_HandFlare_Effect_Green : myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Green : myr_HandFlare_Light_Base
    {
        type = "myr_HandFlare_Light_Green";
    };
    class myr_HandFlare_Light_Sparks_Green : myr_HandFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Green";
    };
    class myr_HandFlare_Effect_Smoke_Green : myr_HandFlare_Effect_Smoke_Base
    {
        type = "myr_HandFlare_Effect_Smoke_Green";
    };
    class myr_HandFlare_Effect_Smoke_Green_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        type = "myr_HandFlare_Effect_Smoke_Green_UW";
    };
    class myr_HandFlare_Effect_Sparks_Green : myr_HandFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Green";
    };
    class myr_HandFlare_Effect_Flame_Green : myr_HandFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Green";
    };
};
class myr_HandFlare_Effect_Yellow : myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Yellow : myr_HandFlare_Light_Base
    {
        type = "myr_HandFlare_Light_Yellow";
    };
    class myr_HandFlare_Light_Sparks_Yellow : myr_HandFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Yellow";
    };
    class myr_HandFlare_Effect_Smoke_Yellow : myr_HandFlare_Effect_Smoke_Base
    {
        type = "myr_HandFlare_Effect_Smoke_Yellow";
    };
    class myr_HandFlare_Effect_Smoke_Yellow_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        type = "myr_HandFlare_Effect_Smoke_Yellow_UW";
    };
    class myr_HandFlare_Effect_Sparks_Yellow : myr_HandFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Yellow";
    };
    class myr_HandFlare_Effect_Flame_Yellow : myr_HandFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Yellow";
    };
};
class myr_HandFlare_Effect_Blue : myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Blue : myr_HandFlare_Light_Base
    {
        type = "myr_HandFlare_Light_Blue";
    };
    class myr_HandFlare_Light_Sparks_Blue : myr_HandFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Blue";
    };
    class myr_HandFlare_Effect_Smoke_Blue : myr_HandFlare_Effect_Smoke_Base
    {
        type = "myr_HandFlare_Effect_Smoke_Blue";
    };
    class myr_HandFlare_Effect_Smoke_Blue_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        type = "myr_HandFlare_Effect_Smoke_Blue_UW";
    };
    class myr_HandFlare_Effect_Sparks_Blue : myr_HandFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Blue";
    };
    class myr_HandFlare_Effect_Flame_Blue : myr_HandFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Blue";
    };
};
class myr_HandFlare_Effect_Purple : myr_HandFlare_Effect_Base
{
    class myr_HandFlare_Light_Purple : myr_HandFlare_Light_Base
    {
        type = "myr_HandFlare_Light_Purple";
    };
    class myr_HandFlare_Light_Sparks_Purple : myr_HandFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Purple";
    };
    class myr_HandFlare_Effect_Smoke_Purple : myr_HandFlare_Effect_Smoke_Base
    {
        type = "myr_HandFlare_Effect_Smoke_Purple";
    };
    class myr_HandFlare_Effect_Smoke_Purple_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        type = "myr_HandFlare_Effect_Smoke_Purple_UW";
    };
    class myr_HandFlare_Effect_Sparks_Purple : myr_HandFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Purple";
    };
    class myr_HandFlare_Effect_Flame_Purple : myr_HandFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Purple";
    };
};
class myr_SignalFlare_Effect_Base : myr_HandFlare_Effect_Base
{
    class myr_SignalFlare_Light_Base : myr_HandFlare_Light_Base
    {
        lifeTime = 290;
    };
    class myr_SignalFlare_Light_Sparks_Base : myr_HandFlare_Light_Sparks_Base
    {
        lifeTime = 260;
    };
    class myr_SignalFlare_Effect_Smoke_Base : myr_HandFlare_Effect_Smoke_Base
    {
        lifeTime = 300;
    };
    class myr_SignalFlare_Effect_Smoke_Base_UW : myr_HandFlare_Effect_Smoke_Base_UW
    {
        lifeTime = 290;
    };
    class myr_SignalFlare_Effect_Sparks_Base : myr_HandFlare_Effect_Sparks_Base
    {
        lifeTime = 260;
    };
    class myr_SignalFlare_Effect_Flame_Base : myr_HandFlare_Effect_Flame_Base
    {
        lifeTime = 290;
    };
};
class myr_SignalFlare_Effect_Red : myr_SignalFlare_Effect_Base
{
    class myr_SignalFlare_Light_Red : myr_SignalFlare_Light_Base
    {
        type = "myr_SignalFlare_Light_Red";
    };
    class myr_SignalFlare_Light_Sparks_Red : myr_SignalFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Red";
    };
    class myr_SignalFlare_Effect_Smoke_Red : myr_SignalFlare_Effect_Smoke_Base
    {
        type = "myr_SignalFlare_Effect_Smoke_Red";
    };
    class myr_SignalFlare_Effect_Smoke_Red_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
        type = "myr_SignalFlare_Effect_Smoke_Red_UW";
    };
    class myr_SignalFlare_Effect_Sparks_Red : myr_SignalFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Red";
    };
    class myr_SignalFlare_Effect_Flame_Red : myr_SignalFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Red";
    };
};
class myr_SignalFlare_Effect_Green : myr_SignalFlare_Effect_Base
{
    class myr_SignalFlare_Light_Green : myr_SignalFlare_Light_Base
    {
        type = "myr_SignalFlare_Light_Green";
    };
    class myr_SignalFlare_Light_Sparks_Green : myr_SignalFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Green";
    };
    class myr_SignalFlare_Effect_Smoke_Green : myr_SignalFlare_Effect_Smoke_Base
    {
        type = "myr_SignalFlare_Effect_Smoke_Green";
    };
    class myr_SignalFlare_Effect_Smoke_Green_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
        type = "myr_SignalFlare_Effect_Smoke_Green_UW";
    };
    class myr_SignalFlare_Effect_Sparks_Green : myr_SignalFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Green";
    };
    class myr_SignalFlare_Effect_Flame_Green : myr_SignalFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Green";
    };
};
class myr_SignalFlare_Effect_Yellow : myr_SignalFlare_Effect_Base
{
    class myr_SignalFlare_Light_Yellow : myr_SignalFlare_Light_Base
    {
        type = "myr_SignalFlare_Light_Yellow";
    };
    class myr_SignalFlare_Light_Sparks_Yellow : myr_SignalFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Yellow";
    };
    class myr_SignalFlare_Effect_Smoke_Yellow : myr_SignalFlare_Effect_Smoke_Base
    {
        type = "myr_SignalFlare_Effect_Smoke_Yellow";
    };
    class myr_SignalFlare_Effect_Smoke_Yellow_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
        type = "myr_SignalFlare_Effect_Smoke_Yellow_UW";
    };
    class myr_SignalFlare_Effect_Sparks_Yellow : myr_SignalFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Yellow";
    };
    class myr_SignalFlare_Effect_Flame_Yellow : myr_SignalFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Yellow";
    };
};
class myr_SignalFlare_Effect_Blue : myr_SignalFlare_Effect_Base
{
    class myr_SignalFlare_Light_Blue : myr_SignalFlare_Light_Base
    {
        type = "myr_SignalFlare_Light_Blue";
    };
    class myr_SignalFlare_Light_Sparks_Blue : myr_SignalFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Blue";
    };
    class myr_SignalFlare_Effect_Smoke_Blue : myr_SignalFlare_Effect_Smoke_Base
    {
        type = "myr_SignalFlare_Effect_Smoke_Blue";
    };
    class myr_SignalFlare_Effect_Smoke_Blue_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
        type = "myr_SignalFlare_Effect_Smoke_Blue_UW";
    };
    class myr_SignalFlare_Effect_Sparks_Blue : myr_SignalFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Blue";
    };
    class myr_SignalFlare_Effect_Flame_Blue : myr_SignalFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Blue";
    };
};
class myr_SignalFlare_Effect_Purple : myr_SignalFlare_Effect_Base
{
    class myr_SignalFlare_Light_Purple : myr_SignalFlare_Light_Base
    {
        type = "myr_SignalFlare_Light_Purple";
    };
    class myr_SignalFlare_Light_Sparks_Purple : myr_SignalFlare_Light_Sparks_Base
    {
        type = "myr_HandFlare_Light_Sparks_Purple";
    };
    class myr_SignalFlare_Effect_Smoke_Purple : myr_SignalFlare_Effect_Smoke_Base
    {
        type = "myr_SignalFlare_Effect_Smoke_Purple";
    };
    class myr_SignalFlare_Effect_Smoke_Purple_UW : myr_SignalFlare_Effect_Smoke_Base_UW
    {
        type = "myr_SignalFlare_Effect_Smoke_Purple_UW";
    };
    class myr_SignalFlare_Effect_Sparks_Purple : myr_SignalFlare_Effect_Sparks_Base
    {
        type = "myr_HandFlare_Effect_Sparks_Purple";
    };
    class myr_SignalFlare_Effect_Flame_Purple : myr_SignalFlare_Effect_Flame_Base
    {
        type = "myr_HandFlare_Effect_Flame_Purple";
    };
};
class CfgAmmo
{
    class FlareBase;
    class myr_GrenadeAmmo_HandFlare_Base : FlareBase
    {
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0.2;
        dangerRadiusHit = -1;
        suppressionRadiusHit = -1;
        typicalspeed = 22;
        mass = 4;
        cost = 100;
        simulation = "shotSmokeX";
        explosive = 0;
        deflecting = 30;
        explosionTime = 0.05;
        timeToLive = 600;
        triggerTime = 0.01;
        triggerSpeedCoef = 1;
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
        soundHit[] = {"", 0, 1};
        SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.2589254, 1, 100};
        SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.2589254, 1, 100};
        SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.2589254, 1, 100};
        SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.12589253, 1, 70};
        SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.12589253, 1, 70};
        grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
        grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
        aiAmmoUsageFlags = "4 + 2";
        whistleDist = 0;
    };
    class myr_GrenadeAmmo_HandFlare_Red : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Red_throw_F";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "myr_HandFlare_Effect_Red";
    };
    class myr_GrenadeAmmo_HandFlare_Green : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "myr_HandFlare_Effect_Green";
    };
    class myr_GrenadeAmmo_HandFlare_Yellow : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.8438, 0.1353, 1};
        effectsSmoke = "myr_HandFlare_Effect_Yellow";
    };
    class myr_GrenadeAmmo_HandFlare_Blue : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.1353, 0.1353, 0.8438, 1};
        effectsSmoke = "myr_HandFlare_Effect_Blue";
    };
    class myr_GrenadeAmmo_HandFlare_Purple : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.1353, 0.8438, 1};
        effectsSmoke = "myr_HandFlare_Effect_Purple";
    };
    class myr_GrenadeAmmo_SignalFlare_Base : myr_GrenadeAmmo_HandFlare_Base
    {
        timeToLive = 360;
    };
    class myr_GrenadeAmmo_SignalFlare_Red : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Red_throw_F";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "myr_SignalFlare_Effect_Red";
    };
    class myr_GrenadeAmmo_SignalFlare_Green : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "myr_SignalFlare_Effect_Green";
    };
    class myr_GrenadeAmmo_SignalFlare_Yellow : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.8438, 0.1353, 1};
        effectsSmoke = "myr_SignalFlare_Effect_Yellow";
    };
    class myr_GrenadeAmmo_SignalFlare_Blue : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.1353, 0.1353, 0.8438, 1};
        effectsSmoke = "myr_SignalFlare_Effect_Blue";
    };
    class myr_GrenadeAmmo_SignalFlare_Purple : myr_GrenadeAmmo_HandFlare_Base
    {
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_throw_F";
        smokeColor[] = {0.8438, 0.1353, 0.8438, 1};
        effectsSmoke = "myr_SignalFlare_Effect_Purple";
    };
};
class CfgMagazines
{
    class CA_Magazine;
    class myr_HandFlare_Base : CA_Magazine
    {
        mass = 8;
        scope = 0;
        value = 1;
        type = 256;
        count = 1;
        initSpeed = 18;
        nameSound = "handgrenade";
        maxLeadSpeed = 6.94444;
        descriptionShort = "Type: Flare mm<br />Rounds: 1<br />Used in: Hand";
    };
    class myr_HandFlare_Red : myr_HandFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Hand Flare (Red)";
        displayNameShort = "Hand Flare (Red)";
        picture = "\weapons_f_JCA_HF\Explosives\data\UI\Icon_HandFlare_red_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Red_F";
        ammo = "myr_GrenadeAmmo_HandFlare_Red";
    };
    class myr_HandFlare_Green : myr_HandFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Hand Flare (Green)";
        displayNameShort = "Hand Flare (Green)";
        picture = "\weapons_f_JCA_HF\Explosives\data\UI\Icon_HandFlare_green_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        ammo = "myr_GrenadeAmmo_HandFlare_Green";
    };
    class myr_HandFlare_Yellow : myr_HandFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Hand Flare (Yellow)";
        displayNameShort = "Hand Flare (Yellow)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_yellow_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_yellow_CO.paa";
        ammo = "myr_GrenadeAmmo_HandFlare_Yellow";
    };
    class myr_HandFlare_Blue : myr_HandFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Hand Flare (Blue)";
        displayNameShort = "Hand Flare (Blue)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_blue_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_blue_CO.paa";
        ammo = "myr_GrenadeAmmo_HandFlare_Blue";
    };
    class myr_HandFlare_Purple : myr_HandFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Hand Flare (Purple)";
        displayNameShort = "Hand Flare (Purple)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_purple_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_purple_CO.paa";
        ammo = "myr_GrenadeAmmo_HandFlare_Purple";
    };
    class myr_SignalFlare_Base : myr_HandFlare_Base
    {
    };
    class myr_SignalFlare_Red : myr_SignalFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Signal Flare (Red)";
        displayNameShort = "Signal Flare (Red)";
        picture = "\weapons_f_JCA_HF\Explosives\data\UI\Icon_HandFlare_red_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Red_F";
        ammo = "myr_GrenadeAmmo_SignalFlare_Red";
    };
    class myr_SignalFlare_Green : myr_SignalFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Signal Flare (Green)";
        displayNameShort = "Signal Flare (Green)";
        picture = "\weapons_f_JCA_HF\Explosives\data\UI\Icon_HandFlare_green_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        ammo = "myr_GrenadeAmmo_SignalFlare_Green";
    };
    class myr_SignalFlare_Yellow : myr_SignalFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Signal Flare (Yellow)";
        displayNameShort = "Signal Flare (Yellow)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_yellow_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_yellow_CO.paa";
        ammo = "myr_GrenadeAmmo_SignalFlare_Yellow";
    };
    class myr_SignalFlare_Blue : myr_SignalFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Signal Flare (Blue)";
        displayNameShort = "Signal Flare (Blue)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_blue_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_blue_CO.paa";
        ammo = "myr_GrenadeAmmo_SignalFlare_Blue";
    };
    class myr_SignalFlare_Purple : myr_SignalFlare_Base
    {
        author = "Panda";
        scope = 2;
        displayName = "Signal Flare (Purple)";
        displayNameShort = "Signal Flare (Purple)";
        picture = "Myrmidon\Data\Weapons\Grenades\Icon_HandFlare_purple_CA.paa";
        model = "weapons_f_JCA_HF\Explosives\HandFlare_Green_F";
        hiddenSelectionsTextures ="Myrmidon\Data\Weapons\Grenades\HandFlare_purple_CO.paa";
        ammo = "myr_GrenadeAmmo_SignalFlare_Purple";
    };
};
class CfgWeapons
{
    class GrenadeLauncher;
    class Throw : GrenadeLauncher
    {
        muzzles[] += {"myr_HandFlare_red_Muzzle", "myr_HandFlare_green_Muzzle", "myr_HandFlare_yellow_Muzzle", "myr_HandFlare_blue_Muzzle", "myr_HandFlare_purple_Muzzle", "myr_SignalFlare_red_Muzzle", "myr_SignalFlare_green_Muzzle", "myr_SignalFlare_yellow_Muzzle", "myr_SignalFlare_blue_Muzzle", "myr_SignalFlare_purple_Muzzle"};
        class ThrowMuzzle;
        class myr_HandFlare_red_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_HandFlare_red"};
        };
        class myr_HandFlare_green_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_HandFlare_green"};
        };
        class myr_HandFlare_yellow_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_HandFlare_yellow"};
        };
        class myr_HandFlare_blue_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_HandFlare_blue"};
        };
        class myr_HandFlare_purple_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_HandFlare_purple"};
        };
        class myr_SignalFlare_red_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_SignalFlare_red"};
        };
        class myr_SignalFlare_green_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_SignalFlare_green"};
        };
        class myr_SignalFlare_yellow_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_SignalFlare_yellow"};
        };
        class myr_SignalFlare_blue_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_SignalFlare_blue"};
        };
        class myr_SignalFlare_purple_Muzzle : ThrowMuzzle
        {
            magazines[] = {"myr_SignalFlare_purple"};
        };
    };
};
class cfgMods
{
    author = "Panda";
    timepacked = "1708538615";
};
